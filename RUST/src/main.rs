use std::collections::HashSet;
fn main(){
    let nums = [1,2,3,1];
    println!("{}", contains_duplicate(&nums));

}
fn contains_duplicate(nums:&[i32]) -> bool {
    let mut my_set = HashSet::new();
    let nums = [1,2,3,1];
    for num in nums {
        my_set.insert(num);
    }
    if my_set.len() < 4 {
        return true;
    }
    else{
        return false;
    }
}