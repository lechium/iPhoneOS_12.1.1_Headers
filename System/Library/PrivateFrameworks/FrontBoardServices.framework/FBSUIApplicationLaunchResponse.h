/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSWorkspaceResponse.h>

@interface FBSUIApplicationLaunchResponse : FBSWorkspaceResponse {

	BOOL _supportsTaskSuspension;
	BOOL _supportsTaskSuspensionOnLock;

}

@property (assign,nonatomic) BOOL supportsTaskSuspension;                    //@synthesize supportsTaskSuspension=_supportsTaskSuspension - In the implementation block
@property (assign,nonatomic) BOOL supportsTaskSuspensionOnLock;              //@synthesize supportsTaskSuspensionOnLock=_supportsTaskSuspensionOnLock - In the implementation block
-(BOOL)supportsTaskSuspension;
-(BOOL)supportsTaskSuspensionOnLock;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(void)setSupportsTaskSuspension:(BOOL)arg1 ;
-(void)setSupportsTaskSuspensionOnLock:(BOOL)arg1 ;
@end

