/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLChangeSession.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>

@class NSString, CPLPlatformObject;

@interface CPLPullChangeSession : CPLChangeSession <CPLAbstractObject>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
+(id)shortDescription;
-(void)acknowledgeChangeBatch:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)getChangeBatchWithCompletionHandler:(/*^block*/id)arg1 ;
@end
