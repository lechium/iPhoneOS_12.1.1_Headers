/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface CKSpotlightSearchResult : NSObject {

	NSString* _chatGUID;
	NSString* _messageGUID;
	NSString* _summary;
	NSDate* _messageDate;

}

@property (nonatomic,copy) NSString * chatGUID;                 //@synthesize chatGUID=_chatGUID - In the implementation block
@property (nonatomic,copy) NSString * messageGUID;              //@synthesize messageGUID=_messageGUID - In the implementation block
@property (nonatomic,copy) NSString * summary;                  //@synthesize summary=_summary - In the implementation block
@property (nonatomic,retain) NSDate * messageDate;              //@synthesize messageDate=_messageDate - In the implementation block
-(NSString *)summary;
-(NSString *)chatGUID;
-(NSString *)messageGUID;
-(NSDate *)messageDate;
-(void)setMessageGUID:(NSString *)arg1 ;
-(void)setSummary:(NSString *)arg1 ;
-(void)setMessageDate:(NSDate *)arg1 ;
-(void)setChatGUID:(NSString *)arg1 ;
-(id)initWithMessageGUID:(id)arg1 chatGUID:(id)arg2 messageTime:(id)arg3 summery:(id)arg4 ;
-(long long)compare:(id)arg1 ;
@end

