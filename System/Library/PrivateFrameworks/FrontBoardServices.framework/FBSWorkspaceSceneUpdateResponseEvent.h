/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSWorkspaceSceneEvent.h>

@class FBSWorkspaceSceneUpdateResponse;

@interface FBSWorkspaceSceneUpdateResponseEvent : FBSWorkspaceSceneEvent {

	FBSWorkspaceSceneUpdateResponse* _response;

}

@property (nonatomic,retain) FBSWorkspaceSceneUpdateResponse * response;              //@synthesize response=_response - In the implementation block
-(void)setResponse:(FBSWorkspaceSceneUpdateResponse *)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(FBSWorkspaceSceneUpdateResponse *)response;
@end

