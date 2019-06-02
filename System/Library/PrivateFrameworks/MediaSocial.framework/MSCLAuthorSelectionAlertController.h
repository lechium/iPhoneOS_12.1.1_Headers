/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIAlertController.h>
#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>

@class NSMutableArray, UIImage, SKUIResourceLoader, NSString;

@interface MSCLAuthorSelectionAlertController : UIAlertController <SKUIArtworkRequestDelegate> {

	NSMutableArray* _artworkNotificationObservers;
	UIImage* _placeholderImage;
	SKUIResourceLoader* _resourceLoader;

}

@property (nonatomic,retain) SKUIResourceLoader * resourceLoader;              //@synthesize resourceLoader=_resourceLoader - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)alertControllerWithTitle:(id)arg1 message:(id)arg2 preferredStyle:(long long)arg3 ;
-(id)_placeholderImage;
-(void)setResourceLoader:(SKUIResourceLoader *)arg1 ;
-(id)_imageDataConsumer;
-(id)addActionWithAuthor:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)_newArtworkRequestForAuthor:(id)arg1 ;
-(SKUIResourceLoader *)resourceLoader;
-(void)dealloc;
@end
