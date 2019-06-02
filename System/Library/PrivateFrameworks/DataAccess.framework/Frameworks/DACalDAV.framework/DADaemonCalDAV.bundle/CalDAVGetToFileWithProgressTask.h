/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DADaemonCalDAV.bundle/DADaemonCalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVGetToFileTask.h>

@class MobileCalDAVAttachmentDownloader, NSString;

@interface CalDAVGetToFileWithProgressTask : CoreDAVGetToFileTask {

	MobileCalDAVAttachmentDownloader* _downloader;
	NSString* _previousETag;

}

@property (assign,nonatomic,__weak) MobileCalDAVAttachmentDownloader * downloader;              //@synthesize downloader=_downloader - In the implementation block
@property (nonatomic,retain) NSString * previousETag;                                           //@synthesize previousETag=_previousETag - In the implementation block
-(NSString *)previousETag;
-(void)setPreviousETag:(NSString *)arg1 ;
-(id)additionalHeaderValues;
-(MobileCalDAVAttachmentDownloader *)downloader;
-(void)setDownloader:(MobileCalDAVAttachmentDownloader *)arg1 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
@end
