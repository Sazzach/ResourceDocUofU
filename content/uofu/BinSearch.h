/**
 * Author: Samuel Zachary
 * Date: 2020-02-13
 * License: CC0
 * Source: self
 * Description: Basic Binary search
 * to help avoid off by one errors
 */

int l = 0; // could be in here
int r = end; // definitely not in here
while(l < r) {
	int mid = l + (r - l) / 2;

	if(check(mid)) {
		l = mid+1;
	}
	else {
		r = mid;
	}
}
int ans = l-1;
