//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TIMInnerUser;

@interface TIMGroupManager : NSObject
{
    TIMInnerUser *user_;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (int)PendencyReport:(unsigned long long)arg1 succ:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (int)GetPendencyFromServer:(id)arg1 succ:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (int)SearchGroup:(id)arg1 flags:(long long)arg2 custom:(id)arg3 pageIndex:(unsigned int)arg4 pageSize:(unsigned int)arg5 succ:(CDUnknownBlockType)arg6 fail:(CDUnknownBlockType)arg7;
- (int)GetGroupPublicInfoV2:(id)arg1 flags:(long long)arg2 custom:(id)arg3 succ:(CDUnknownBlockType)arg4 fail:(CDUnknownBlockType)arg5;
- (int)GetGroupMembers:(id)arg1 ByFilter:(long long)arg2 flags:(long long)arg3 custom:(id)arg4 nextSeq:(unsigned long long)arg5 succ:(CDUnknownBlockType)arg6 fail:(CDUnknownBlockType)arg7;
- (int)GetGroupMembersV2:(id)arg1 flags:(long long)arg2 custom:(id)arg3 nextSeq:(unsigned long long)arg4 succ:(CDUnknownBlockType)arg5 fail:(CDUnknownBlockType)arg6;
- (int)GetGroupMembersInfo:(id)arg1 members:(id)arg2 succ:(CDUnknownBlockType)arg3 fail:(CDUnknownBlockType)arg4;
- (int)GetGroupMembers:(id)arg1 succ:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (int)ModifyGroupMemberVisible:(id)arg1 visible:(_Bool)arg2 succ:(CDUnknownBlockType)arg3 fail:(CDUnknownBlockType)arg4;
- (int)ModifyGroupSearchable:(id)arg1 searchable:(_Bool)arg2 succ:(CDUnknownBlockType)arg3 fail:(CDUnknownBlockType)arg4;
- (int)ModifyGroupMemberInfoSetCustomInfo:(id)arg1 user:(id)arg2 customInfo:(id)arg3 succ:(CDUnknownBlockType)arg4 fail:(CDUnknownBlockType)arg5;
- (int)ModifyGroupMemberInfoSetNameCard:(id)arg1 user:(id)arg2 nameCard:(id)arg3 succ:(CDUnknownBlockType)arg4 fail:(CDUnknownBlockType)arg5;
- (int)ModifyGroupMemberInfoSetSilence:(id)arg1 user:(id)arg2 stime:(unsigned int)arg3 succ:(CDUnknownBlockType)arg4 fail:(CDUnknownBlockType)arg5;
- (int)ModifyGroupMemberInfoSetRole:(id)arg1 user:(id)arg2 role:(long long)arg3 succ:(CDUnknownBlockType)arg4 fail:(CDUnknownBlockType)arg5;
- (int)ModifyReciveMessageOpt:(id)arg1 opt:(long long)arg2 succ:(CDUnknownBlockType)arg3 fail:(CDUnknownBlockType)arg4;
- (int)GetReciveMessageOpt:(id)arg1 succ:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (int)ModifyGroupOwner:(id)arg1 user:(id)arg2 succ:(CDUnknownBlockType)arg3 fail:(CDUnknownBlockType)arg4;
- (int)ModifyGroupCustomInfo:(id)arg1 customInfo:(id)arg2 succ:(CDUnknownBlockType)arg3 fail:(CDUnknownBlockType)arg4;
- (int)ModifyGroupAddOpt:(id)arg1 opt:(long long)arg2 succ:(CDUnknownBlockType)arg3 fail:(CDUnknownBlockType)arg4;
- (int)ModifyGroupFaceUrl:(id)arg1 url:(id)arg2 succ:(CDUnknownBlockType)arg3 fail:(CDUnknownBlockType)arg4;
- (int)ModifyGroupNotification:(id)arg1 notification:(id)arg2 succ:(CDUnknownBlockType)arg3 fail:(CDUnknownBlockType)arg4;
- (int)ModifyGroupIntroduction:(id)arg1 introduction:(id)arg2 succ:(CDUnknownBlockType)arg3 fail:(CDUnknownBlockType)arg4;
- (int)ModifyGroupName:(id)arg1 groupName:(id)arg2 succ:(CDUnknownBlockType)arg3 fail:(CDUnknownBlockType)arg4;
- (int)GetGroupPublicInfo:(id)arg1 succ:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (int)GetGroupSelfInfo:(id)arg1 succ:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (int)GetGroupInfo:(id)arg1 succ:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (int)GetGroupList:(CDUnknownBlockType)arg1 fail:(CDUnknownBlockType)arg2;
- (int)QuitGroup:(id)arg1 succ:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (int)JoinGroup:(id)arg1 msg:(id)arg2 succ:(CDUnknownBlockType)arg3 fail:(CDUnknownBlockType)arg4;
- (int)DeleteGroupMemberWithReason:(id)arg1 reason:(id)arg2 members:(id)arg3 succ:(CDUnknownBlockType)arg4 fail:(CDUnknownBlockType)arg5;
- (int)DeleteGroupMember:(id)arg1 members:(id)arg2 succ:(CDUnknownBlockType)arg3 fail:(CDUnknownBlockType)arg4;
- (int)InviteGroupMember:(id)arg1 members:(id)arg2 succ:(CDUnknownBlockType)arg3 fail:(CDUnknownBlockType)arg4;
- (int)DeleteGroup:(id)arg1 succ:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (int)CreateGroup:(id)arg1 succ:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (int)CreateGroup:(id)arg1 members:(id)arg2 groupName:(id)arg3 groupId:(id)arg4 succ:(CDUnknownBlockType)arg5 fail:(CDUnknownBlockType)arg6;
- (int)CreatePublicGroup:(id)arg1 groupName:(id)arg2 succ:(CDUnknownBlockType)arg3 fail:(CDUnknownBlockType)arg4;
- (int)CreateAVChatRoomGroup:(id)arg1 succ:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (int)CreateChatRoomGroup:(id)arg1 groupName:(id)arg2 succ:(CDUnknownBlockType)arg3 fail:(CDUnknownBlockType)arg4;
- (int)CreatePrivateGroup:(id)arg1 groupName:(id)arg2 succ:(CDUnknownBlockType)arg3 fail:(CDUnknownBlockType)arg4;
- (int)setUser:(id)arg1;
- (basic_string_a490aa4c)getIdentifier;

@end

