/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface AVTResourceLocator : NSObject {

	NSURL* _resourcesURL;
	NSURL* _componentsURL;

}

@property (readonly) NSURL * resourcesURL;                     //@synthesize resourcesURL=_resourcesURL - In the implementation block
@property (readonly) NSURL * memojiResourcesURL; 
@property (readonly) NSURL * animojiResourcesURL; 
@property (readonly) NSURL * componentsURL;                    //@synthesize componentsURL=_componentsURL - In the implementation block
@property (readonly) NSURL * maskImagesURL; 
@property (readonly) NSURL * materialsURL; 
@property (readonly) NSURL * presetThumbnailsURL; 
@property (readonly) NSURL * propsURL; 
+(id)sharedResourceLocator;
-(NSURL *)resourcesURL;
-(NSURL *)componentsURL;
-(NSURL *)memojiResourcesURL;
-(NSURL *)animojiResourcesURL;
-(id)pathForMemojiResource:(id)arg1 ofType:(id)arg2 ;
-(id)pathForMemojiResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 ;
-(id)pathForAnimojiResource:(id)arg1 ofType:(id)arg2 ;
-(id)pathForAnimojiResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 ;
-(NSURL *)maskImagesURL;
-(NSURL *)materialsURL;
-(NSURL *)presetThumbnailsURL;
-(NSURL *)propsURL;
@end
