/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuickLook/QuickLook-Structs.h>
@class NSURL;

@interface QLThumbnail : NSObject {

	NSURL* _url;

}

@property (retain) NSURL * url;              //@synthesize url=_url - In the implementation block
+(id)sharedQueue;
+(id)defaultDescriptors;
-(id)thumbnailCreationOperationForUseMode:(unsigned long long)arg1 descriptor:(id)arg2 generateIfNeeded:(BOOL)arg3 ;
-(id)thumbnailCreationOperationForUseMode:(unsigned long long)arg1 descriptor:(id)arg2 ;
-(id)imageForUseMode:(unsigned long long)arg1 descriptor:(id)arg2 generateIfNeeded:(BOOL)arg3 contentRect:(CGRect*)arg4 error:(id*)arg5 ;
-(BOOL)provideImages:(/*^block*/id)arg1 error:(id*)arg2 ;
-(NSURL *)url;
-(id)initWithURL:(id)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
@end
