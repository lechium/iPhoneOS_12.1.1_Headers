/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IntentsUI/IntentsUI-Structs.h>
#import <libobjc.A.dylib/SFResourceLoader.h>
#import <libobjc.A.dylib/INImageLoading.h>

@protocol INUIImageLoaderDelegate;
@class NSString;

@interface INUIImageLoader : NSObject <SFResourceLoader, INImageLoading> {

	id<INUIImageLoaderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<INUIImageLoaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * serviceIdentifier; 
@property (nonatomic,readonly) unsigned long long servicePriority; 
+(id)registeredImageLoaderWithScreenDelegate;
-(unsigned long long)servicePriority;
-(BOOL)canLoadImageDataForImage:(id)arg1 ;
-(void)registerWithIntents;
-(void)registerWithSearchFoundation;
-(void)deregisterWithIntents;
-(void)deregisterWithSearchFoundation;
-(void)loadDataImageFromImage:(id)arg1 usingPortableImageLoader:(id)arg2 scaledSize:(SCD_Struct_IN1)arg3 accessSpecifier:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)loadImage:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(NSString *)serviceIdentifier;
-(void)dealloc;
-(void)setDelegate:(id<INUIImageLoaderDelegate>)arg1 ;
-(id<INUIImageLoaderDelegate>)delegate;
@end

