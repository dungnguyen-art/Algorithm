fn main(){
    let s = "anagram";
    let t = "nagaram";
    println!("compare = {}", is_anagram(&s, &t));
}

fn is_anagram(s:&str, t:&str) ->bool {
    let mut s:Vec<char> = s.chars().collect();
    let mut t:Vec<char> = t.chars().collect();
    s.sort();
    t.sort();
    let sorted_s:String = s.into_iter().collect();
    let sourted_t:String = t.into_iter().collect();
    return sorted_s == sorted_s;
}