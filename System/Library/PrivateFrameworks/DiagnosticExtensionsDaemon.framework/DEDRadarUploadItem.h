/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticExtensionsDaemon/DEDAttachmentItem.h>

@interface DEDRadarUploadItem : DEDAttachmentItem {

	BOOL _isUploaded;
	unsigned long long _taskIdentifier;
	long long _totalBytesSent;
	long long _totalBytesExpectedToSend;

}

@property (assign,nonatomic) unsigned long long taskIdentifier;               //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
@property (assign,nonatomic) long long totalBytesSent;                        //@synthesize totalBytesSent=_totalBytesSent - In the implementation block
@property (assign,nonatomic) long long totalBytesExpectedToSend;              //@synthesize totalBytesExpectedToSend=_totalBytesExpectedToSend - In the implementation block
@property (assign,nonatomic) BOOL isUploaded;                                 //@synthesize isUploaded=_isUploaded - In the implementation block
-(unsigned long long)taskIdentifier;
-(void)setTaskIdentifier:(unsigned long long)arg1 ;
-(BOOL)isUploaded;
-(id)initWithUploadTask:(id)arg1 andAttachment:(id)arg2 ;
-(void)setIsUploaded:(BOOL)arg1 ;
-(void)setTotalBytesSent:(long long)arg1 ;
-(void)setTotalBytesExpectedToSend:(long long)arg1 ;
-(long long)totalBytesSent;
-(long long)totalBytesExpectedToSend;
-(id)description;
@end

