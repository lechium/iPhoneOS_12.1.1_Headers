/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VUIImageLoadingOperation;
@class NSOperation;

@interface VUIImageLoadContext : NSObject {

	NSOperation*<VUIImageLoadingOperation> _imageLoadOperation;
	unsigned long long _requestCount;

}

@property (nonatomic,retain) NSOperation*<VUIImageLoadingOperation> imageLoadOperation;              //@synthesize imageLoadOperation=_imageLoadOperation - In the implementation block
@property (assign,nonatomic) unsigned long long requestCount;                                        //@synthesize requestCount=_requestCount - In the implementation block
-(void)setRequestCount:(unsigned long long)arg1 ;
-(unsigned long long)requestCount;
-(NSOperation*<VUIImageLoadingOperation>)imageLoadOperation;
-(void)setImageLoadOperation:(NSOperation*<VUIImageLoadingOperation>)arg1 ;
@end

