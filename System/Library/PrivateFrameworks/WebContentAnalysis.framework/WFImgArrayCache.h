/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableString;

@interface WFImgArrayCache : NSObject {

	NSMutableString* imageAlternativeDescriptions;
	long long numberOfUnknownSizedImages;
	long long numberOfKnownImagePixels;

}
+(id)imgArrayCacheWithArray:(id)arg1 ;
-(long long)numberOfKnownImagePixels;
-(id)imageAlternativeDescriptions;
-(long long)numberOfUnknownSizedImages;
-(void)dealloc;
-(id)initWithArray:(id)arg1 ;
@end
