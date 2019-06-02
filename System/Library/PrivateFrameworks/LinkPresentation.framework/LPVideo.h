/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <libobjc.A.dylib/AVAssetResourceLoaderDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSData, NSObject, AVURLAsset, LPVideoProperties, NSURL, NSString, AVAsset;

@interface LPVideo : NSObject <AVAssetResourceLoaderDelegate, NSSecureCoding> {

	NSData* _data;
	NSObject*<OS_dispatch_queue> _mediaLoadingQueue;
	CGSize _intrinsicSize;
	AVURLAsset* _asset;
	id _mediaServicesResetNotificationHandler;
	LPVideoProperties* _properties;
	NSURL* _streamingURL;
	NSURL* _youTubeURL;
	NSString* _MIMEType;
	NSURL* _fileURL;

}

@property (nonatomic,readonly) unsigned long long _encodedSize; 
@property (nonatomic,readonly) CGSize _intrinsicSize; 
@property (nonatomic,readonly) AVAsset * _asset; 
@property (nonatomic,retain) NSURL * fileURL;                                    //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain,readonly) NSURL * streamingURL;                      //@synthesize streamingURL=_streamingURL - In the implementation block
@property (nonatomic,retain,readonly) NSURL * youTubeURL;                        //@synthesize youTubeURL=_youTubeURL - In the implementation block
@property (nonatomic,copy,readonly) NSData * data; 
@property (nonatomic,copy,readonly) NSString * MIMEType;                         //@synthesize MIMEType=_MIMEType - In the implementation block
@property (nonatomic,readonly) BOOL hasAudio; 
@property (nonatomic,copy,readonly) LPVideoProperties * properties; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setFileURL:(NSURL *)arg1 ;
-(AVAsset *)_asset;
-(BOOL)hasAudio;
-(NSURL *)streamingURL;
-(id)initWithYouTubeURL:(id)arg1 properties:(id)arg2 ;
-(id)initWithStreamingURL:(id)arg1 properties:(id)arg2 ;
-(id)initWithData:(id)arg1 MIMEType:(id)arg2 properties:(id)arg3 ;
-(id)initByReferencingFileURL:(id)arg1 MIMEType:(id)arg2 properties:(id)arg3 ;
-(BOOL)_shouldEncodeData;
-(void)_mapDataFromFileURL;
-(unsigned long long)_encodedSize;
-(NSURL *)youTubeURL;
-(CGSize)_intrinsicSize;
-(void)_uninstallMediaServicesResetNotificationHandler;
-(void)_installMediaServicesResetNotificationHandler;
-(id)_initWithVideo:(id)arg1 ;
-(id)initWithData:(id)arg1 MIMEType:(id)arg2 hasAudio:(BOOL)arg3 ;
-(id)initByReferencingFileURL:(id)arg1 MIMEType:(id)arg2 hasAudio:(BOOL)arg3 ;
-(id)initWithStreamingURL:(id)arg1 hasAudio:(BOOL)arg2 ;
-(id)initWithYouTubeURL:(id)arg1 ;
-(BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)fileURL;
-(NSData *)data;
-(LPVideoProperties *)properties;
-(NSString *)MIMEType;
@end
