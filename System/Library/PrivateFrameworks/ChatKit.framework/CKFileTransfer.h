/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class IMMessage, NSString, NSURL, NSDictionary, NSError;


@protocol CKFileTransfer <NSObject>
@property (nonatomic,retain) IMMessage * IMMessage; 
@property (nonatomic,copy,readonly) NSString * guid; 
@property (nonatomic,copy,readonly) NSURL * fileURL; 
@property (nonatomic,copy,readonly) NSString * filename; 
@property (nonatomic,copy,readonly) NSDictionary * transcoderUserInfo; 
@property (nonatomic,copy,readonly) NSDictionary * stickerUserInfo; 
@property (nonatomic,copy,readonly) NSDictionary * attributionInfo; 
@property (nonatomic,copy,readonly) NSError * error; 
@property (nonatomic,readonly) unsigned long long currentBytes; 
@property (nonatomic,readonly) unsigned long long totalBytes; 
@property (nonatomic,readonly) BOOL isSticker; 
@property (nonatomic,readonly) BOOL hideAttachment; 
@property (getter=isFileURLFinalized,nonatomic,readonly) BOOL fileURLFinalized; 
@property (getter=isFileDataReady,nonatomic,readonly) BOOL fileDataReady; 
@property (getter=isDownloadable,nonatomic,readonly) BOOL downloadable; 
@property (getter=isDownloading,nonatomic,readonly) BOOL downloading; 
@property (getter=isRestoring,nonatomic,readonly) BOOL restoring; 
@optional
-(id)initWithStickerFileURL:(id)arg1 transferUserInfo:(id)arg2 attributionInfo:(id)arg3;

@required
-(NSString *)guid;
-(unsigned long long)totalBytes;
-(BOOL)isSticker;
-(NSDictionary *)attributionInfo;
-(BOOL)isDownloadable;
-(BOOL)isRestoring;
-(IMMessage *)IMMessage;
-(BOOL)isFileDataReady;
-(void)setIMMessage:(id)arg1;
-(id)initWithFileURL:(id)arg1 transcoderUserInfo:(id)arg2 attributionInfo:(id)arg3 hideAttachment:(BOOL)arg4;
-(void)mediaObjectRemoved;
-(void)mediaObjectAdded;
-(NSDictionary *)transcoderUserInfo;
-(void)fetchHighQualityFile:(/*^block*/id)arg1;
-(BOOL)isFileURLFinalized;
-(BOOL)isDownloading;
-(NSDictionary *)stickerUserInfo;
-(id)initWithTransferGUID:(id)arg1 imMessage:(id)arg2;
-(unsigned long long)currentBytes;
-(BOOL)hideAttachment;
-(NSURL *)fileURL;
-(NSString *)filename;
-(NSError *)error;

@end

