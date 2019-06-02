/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKFileTransfer.h>

@protocol OS_dispatch_queue;
@class IMMessage, NSString, NSURL, NSDictionary, NSError, NSObject;

@interface CKIMFileTransfer : NSObject <CKFileTransfer> {

	int _mediaObjectCount;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	BOOL _isSticker;
	BOOL _fileDataReady;
	BOOL _fileURLFinalized;
	BOOL _restoring;
	BOOL _hideAttachment;
	NSString* _guid;
	NSURL* _fileURL;
	NSString* _filename;
	NSError* _error;
	NSDictionary* _transcoderUserInfo;
	NSDictionary* _stickerUserInfo;
	unsigned long long _currentBytes;
	unsigned long long _totalBytes;
	long long _transferState;
	IMMessage* _imMessage;
	NSURL* _linkFileURL;
	NSDictionary* _attributionInfo;

}

@property (nonatomic,copy) NSURL * linkFileURL;                                              //@synthesize linkFileURL=_linkFileURL - In the implementation block
@property (assign,nonatomic) long long transferState;                                        //@synthesize transferState=_transferState - In the implementation block
@property (nonatomic,copy) NSDictionary * attributionInfo;                                   //@synthesize attributionInfo=_attributionInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) IMMessage * IMMessage;                                          //@synthesize imMessage=_imMessage - In the implementation block
@property (nonatomic,copy,readonly) NSString * guid;                                         //@synthesize guid=_guid - In the implementation block
@property (nonatomic,copy,readonly) NSURL * fileURL;                                         //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * filename;                                     //@synthesize filename=_filename - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * transcoderUserInfo;                       //@synthesize transcoderUserInfo=_transcoderUserInfo - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * stickerUserInfo;                          //@synthesize stickerUserInfo=_stickerUserInfo - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                                         //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) unsigned long long currentBytes;                              //@synthesize currentBytes=_currentBytes - In the implementation block
@property (nonatomic,readonly) unsigned long long totalBytes;                                //@synthesize totalBytes=_totalBytes - In the implementation block
@property (nonatomic,readonly) BOOL isSticker;                                               //@synthesize isSticker=_isSticker - In the implementation block
@property (nonatomic,readonly) BOOL hideAttachment;                                          //@synthesize hideAttachment=_hideAttachment - In the implementation block
@property (getter=isFileURLFinalized,nonatomic,readonly) BOOL fileURLFinalized;              //@synthesize fileURLFinalized=_fileURLFinalized - In the implementation block
@property (getter=isFileDataReady,nonatomic,readonly) BOOL fileDataReady;                    //@synthesize fileDataReady=_fileDataReady - In the implementation block
@property (getter=isDownloadable,nonatomic,readonly) BOOL downloadable; 
@property (getter=isDownloading,nonatomic,readonly) BOOL downloading; 
@property (getter=isRestoring,nonatomic,readonly) BOOL restoring;                            //@synthesize restoring=_restoring - In the implementation block
-(NSString *)guid;
-(id)fileManager;
-(unsigned long long)totalBytes;
-(BOOL)isSticker;
-(NSDictionary *)attributionInfo;
-(BOOL)isDownloadable;
-(BOOL)isRestoring;
-(IMMessage *)IMMessage;
-(BOOL)isFileDataReady;
-(void)setIMMessage:(IMMessage *)arg1 ;
-(id)initWithFileURL:(id)arg1 transcoderUserInfo:(id)arg2 attributionInfo:(id)arg3 hideAttachment:(BOOL)arg4 ;
-(void)setTransferState:(long long)arg1 ;
-(void)mediaObjectRemoved;
-(void)mediaObjectAdded;
-(NSDictionary *)transcoderUserInfo;
-(void)fetchHighQualityFile:(/*^block*/id)arg1 ;
-(BOOL)isFileURLFinalized;
-(BOOL)isDownloading;
-(void)transferUpdated:(id)arg1 ;
-(id)notificationCenter;
-(void)setAttributionInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)stickerUserInfo;
-(id)initWithTransferGUID:(id)arg1 imMessage:(id)arg2 ;
-(id)initWithStickerFileURL:(id)arg1 transferUserInfo:(id)arg2 attributionInfo:(id)arg3 ;
-(id)imFileTransferCenter;
-(NSURL *)linkFileURL;
-(unsigned long long)currentBytes;
-(long long)transferState;
-(id)linkFileURLWithFilename:(id)arg1 ;
-(void)updateTransfer;
-(id)syncController;
-(void)attachmentRestored:(id)arg1 ;
-(BOOL)hideAttachment;
-(void)setLinkFileURL:(NSURL *)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSURL *)fileURL;
-(NSString *)filename;
-(NSError *)error;
@end

