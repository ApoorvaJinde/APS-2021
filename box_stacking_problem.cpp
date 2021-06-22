#include <bits/stdc++.h>
using namespace std;

class Box {
public:
	int length;
	int width;
	int height;
};


int dp[303];

int findMaxHeight(vector<Box>& boxes, int bottom_box_index, int index)
{

	// base case
	if (index < 0)
		return 0;

	if (dp[index] != -1)
		return dp[index];

	int maximumHeight = 0;

	// recurse
	for (int i = index; i >= 0; i--) {

		// if there is no bottom box
		if (bottom_box_index == -1

			// or if length & width of new box is < that of
			// bottom box
			|| (boxes[i].length
					< boxes[bottom_box_index].length
				&& boxes[i].width
					< boxes[bottom_box_index].width))

			maximumHeight
				= max(maximumHeight,
					findMaxHeight(boxes, i, i - 1)
						+ boxes[i].height);
	}

	return dp[index] = maximumHeight;
}

int maxStackHeight(int height[], int width[], int length[],
				int types)
{
	// creating a vector of type Box class
	vector<Box> boxes;

	// Initialize dp array with -1
	memset(dp, -1, sizeof(dp));

	Box box;

	for (int i = 0; i < types; i++) {

		// copy original box
		box.height = height[i];
		box.length = max(length[i], width[i]);
		box.width = min(length[i], width[i]);

		boxes.push_back(box);

		// First rotation of box
		box.height = width[i];
		box.length = max(length[i], height[i]);
		box.width = min(length[i], height[i]);

		boxes.push_back(box);

		// Second rotation of box
		box.height = length[i];
		box.length = max(width[i], height[i]);
		box.width = min(width[i], height[i]);

		boxes.push_back(box);
	}

	// sort by area in ascending order .. because we will be dealing with this vector in reverse
	sort(boxes.begin(), boxes.end(), [](Box b1, Box b2) {
		// if area of box1 < area of box2
		return (b1.length * b1.width)
			< (b2.length * b2.width);
	});

	return findMaxHeight(boxes, -1, boxes.size() - 1);
}

int main()
{

	// where length, width and height of a particular box
	// are at ith index of the following arrays
	int length[] = { 4, 1, 4, 10 };
	int width[] = { 6, 2, 5, 12 };
	int height[] = { 7, 3, 6, 32 };

	int n = sizeof(length) / sizeof(length[0]);

	printf("The maximum possible height of stack is %d\n",
		maxStackHeight(height, length, width, n));

	return 0;
}
