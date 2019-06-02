/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNUIPRLikenessResolver, CNUILikenessRendering, CNScheduler;
@interface CNAvatarImageRenderer : NSObject {

	id<CNUIPRLikenessResolver> _resolver;
	id<CNUILikenessRendering> _renderer;
	id<CNScheduler> _backgroundScheduler;

}

@property (nonatomic,readonly) id<CNUIPRLikenessResolver> resolver;              //@synthesize resolver=_resolver - In the implementation block
@property (nonatomic,readonly) id<CNUILikenessRendering> renderer;               //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> backgroundScheduler;              //@synthesize backgroundScheduler=_backgroundScheduler - In the implementation block
+(id)descriptorForRequiredKeys;
-(id)renderedLikenessesForContacts:(id)arg1 scope:(id)arg2 ;
-(id<CNScheduler>)backgroundScheduler;
-(id<CNUIPRLikenessResolver>)resolver;
-(id)runScopeBasedImageObservable:(/*^block*/id)arg1 scope:(id)arg2 imageHandler:(/*^block*/id)arg3 ;
-(id)renderedMonogramObservableForString:(id)arg1 scope:(id)arg2 ;
-(id)renderAvatarsForContacts:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)renderMonogramForString:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)renderAvatarsForContacts:(id)arg1 scope:(id)arg2 imageHandler:(/*^block*/id)arg3 ;
-(id)loadingPlaceholderImageProvider;
-(id)placeholderImageProvider;
-(id)renderMonogramForString:(id)arg1 scope:(id)arg2 imageHandler:(/*^block*/id)arg3 ;
-(id<CNUILikenessRendering>)renderer;
-(id)init;
-(id)initWithSettings:(id)arg1 ;
@end
