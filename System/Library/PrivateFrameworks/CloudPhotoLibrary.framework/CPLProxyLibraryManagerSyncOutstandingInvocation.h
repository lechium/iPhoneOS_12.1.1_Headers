/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface CPLProxyLibraryManagerSyncOutstandingInvocation : NSObject {

	BOOL _didFinish;
	NSDictionary* _errors;

}

@property (nonatomic,retain) NSDictionary * errors;              //@synthesize errors=_errors - In the implementation block
@property (assign,nonatomic) BOOL didFinish;                     //@synthesize didFinish=_didFinish - In the implementation block
-(void)setErrors:(NSDictionary *)arg1 ;
-(NSDictionary *)errors;
-(void)setDidFinish:(BOOL)arg1 ;
-(BOOL)didFinish;
-(id)description;
@end

