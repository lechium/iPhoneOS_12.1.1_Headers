/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Silex/Silex-Structs.h>
@class CALayer, NSOperationQueue;

@interface SXImageDecodingTools : NSObject {

	CALayer* _rootLayer;
	NSOperationQueue* _decodingQueue;

}

@property (nonatomic,retain) CALayer * rootLayer;                           //@synthesize rootLayer=_rootLayer - In the implementation block
@property (nonatomic,retain) NSOperationQueue * decodingQueue;              //@synthesize decodingQueue=_decodingQueue - In the implementation block
+(id)sharedInstance;
-(NSOperationQueue *)decodingQueue;
-(id)decodeImage:(CGImageRef)arg1 ;
-(id)imageFromData:(id)arg1 size:(CGSize)arg2 ;
-(CGImageRef)newImageByDecodingImage:(CGImageRef)arg1 size:(CGSize)arg2 ;
-(CFStringRef)contentTypeForImageData:(id)arg1 ;
-(void)loadImageFromImageData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)imageFromData:(id)arg1 ;
-(id)loadAnimatedImageFromImageData:(id)arg1 ;
-(BOOL)dataIsAnimatedImage:(id)arg1 ;
-(void)setDecodingQueue:(NSOperationQueue *)arg1 ;
-(id)init;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(CALayer *)rootLayer;
-(void)setRootLayer:(CALayer *)arg1 ;
@end

