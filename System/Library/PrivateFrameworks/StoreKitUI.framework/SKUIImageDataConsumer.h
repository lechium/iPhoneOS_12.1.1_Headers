/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreServices/SSVURLDataConsumer.h>

@interface SKUIImageDataConsumer : SSVURLDataConsumer

@property (getter=isImagePlaceholderAvailable,nonatomic,readonly) BOOL imagePlaceholderAvailable; 
-(id)objectForData:(id)arg1 response:(id)arg2 error:(id*)arg3 ;
-(id)imageForImage:(id)arg1 ;
-(BOOL)isImagePlaceholderAvailable;
-(id)imagePlaceholderForColor:(id)arg1 ;
-(id)imageForColor:(id)arg1 ;
-(id)imageForColor:(id)arg1 size:(CGSize)arg2 ;
@end

