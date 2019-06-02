/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DADaemonCalDAV.bundle/DADaemonCalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DAEventsAttachmentDownloadConsumer;
@class NSString;

@interface MobileCalDAVDownloadContext : NSObject {

	id<DAEventsAttachmentDownloadConsumer> _consumer;
	NSString* _attachmentUUID;

}

@property (assign,nonatomic,__weak) id<DAEventsAttachmentDownloadConsumer> consumer;              //@synthesize consumer=_consumer - In the implementation block
@property (nonatomic,retain) NSString * attachmentUUID;                                           //@synthesize attachmentUUID=_attachmentUUID - In the implementation block
+(id)contextWithAttachmentUUID:(id)arg1 consumer:(id)arg2 ;
-(NSString *)attachmentUUID;
-(void)setAttachmentUUID:(NSString *)arg1 ;
-(id)initWithAttachmentUUID:(id)arg1 consumer:(id)arg2 ;
-(id<DAEventsAttachmentDownloadConsumer>)consumer;
-(void)setConsumer:(id<DAEventsAttachmentDownloadConsumer>)arg1 ;
@end
