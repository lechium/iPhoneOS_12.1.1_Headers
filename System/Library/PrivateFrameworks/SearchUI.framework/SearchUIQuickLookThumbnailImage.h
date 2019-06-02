/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUIImage.h>

@class NSURL;

@interface SearchUIQuickLookThumbnailImage : SearchUIImage {

	NSURL* _url;

}

@property (retain) NSURL * url;              //@synthesize url=_url - In the implementation block
+(id)quickLookThumbnailQueue;
-(void)loadImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSURL *)url;
-(id)initWithURL:(id)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(Class)classForCoder;
@end
