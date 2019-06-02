/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Messages/PlugIns/iMessage.imservice/iMessage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface MessageActiveDevice : NSObject {

	BOOL _hasReceivedReadReceipt;
	NSString* _idsDestination;
	NSDate* _latestActiveDate;
	NSDate* _latestReadReceipt;

}

@property (nonatomic,retain) NSString * idsDestination;                //@synthesize idsDestination=_idsDestination - In the implementation block
@property (nonatomic,retain) NSDate * latestActiveDate;                //@synthesize latestActiveDate=_latestActiveDate - In the implementation block
@property (assign,nonatomic) BOOL hasReceivedReadReceipt;              //@synthesize hasReceivedReadReceipt=_hasReceivedReadReceipt - In the implementation block
@property (nonatomic,retain) NSDate * latestReadReceipt;               //@synthesize latestReadReceipt=_latestReadReceipt - In the implementation block
-(void)setIdsDestination:(NSString *)arg1 ;
-(NSString *)idsDestination;
-(BOOL)shouldDisplayRemoteDecryptionFailure;
-(BOOL)shouldDisplayAttachmentDownloadFailure;
-(id)initWithIDSDestination:(id)arg1 latestDate:(id)arg2 latestReadReceiptDate:(id)arg3 hasReceivedReadReceipt:(BOOL)arg4 ;
-(void)setLatestActiveDate:(NSDate *)arg1 ;
-(void)setHasReceivedReadReceipt:(BOOL)arg1 ;
-(void)setLatestReadReceipt:(NSDate *)arg1 ;
-(BOOL)shouldSendTypingIndicator;
-(BOOL)_hasReceivedReadReceiptRecently;
-(NSDate *)latestActiveDate;
-(BOOL)hasReceivedReadReceipt;
-(NSDate *)latestReadReceipt;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
@end

