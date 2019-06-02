/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSURL, PHAnimatedImage;

@interface _PHAnimatedImageLoadOperation : NSOperation {

	long long _cacheStrategy;
	BOOL _useSharedImageDecoding;
	NSURL* _animatedImageURL;
	PHAnimatedImage* _animatedImage;

}

@property (retain) PHAnimatedImage * animatedImage;              //@synthesize animatedImage=_animatedImage - In the implementation block
+(id)_requestIsolationQueue;
+(id)_inq_animatedImageLoadingOperations;
+(void)_registerOperation:(id)arg1 forRequestID:(long long)arg2 ;
+(id)_removeOperation:(long long)arg1 ;
+(id)_animatedImageSharedLoadingQueue;
+(long long)nextRequestID;
-(id)initWithURL:(id)arg1 cachingStrategy:(long long)arg2 useSharedDecoding:(BOOL)arg3 ;
-(PHAnimatedImage *)animatedImage;
-(void)setAnimatedImage:(PHAnimatedImage *)arg1 ;
-(void)main;
@end
