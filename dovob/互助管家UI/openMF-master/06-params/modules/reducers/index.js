/**
 * Created by mfhj-dz-001-424 on 16/11/23.
 */
import  { combineReducers} from 'redux';
import  {userProfile}  from './userProfileReducer';
// 当userProfileReducer.js中加上default时，就不需要import加上{} ,反之必须如上加上才行。 丫的，什么破玩意了
//reducers对应于store里面的state，所有的需要的state，都应该在这里注册

const rootReducer=combineReducers({
    userProfile,
});
export default rootReducer