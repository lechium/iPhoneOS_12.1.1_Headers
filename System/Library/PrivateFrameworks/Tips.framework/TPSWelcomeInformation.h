/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Tips.framework/Tips
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TPSWelcomeInformation : NSObject {

	NSString* _title;
	NSString* _message;
	NSString* _collectionID;

}

@property (nonatomic,retain) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * message;                   //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSString * collectionID;              //@synthesize collectionID=_collectionID - In the implementation block
-(void)setCollectionID:(NSString *)arg1 ;
-(NSString *)collectionID;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
@end

