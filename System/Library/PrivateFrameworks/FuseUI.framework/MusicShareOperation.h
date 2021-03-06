/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MusicEntityValueProviding, MusicJSNativeViewControllerFactory;
@class MusicEntityValueProviderWrapper, MusicEntityValueContext, MPUContentItemIdentifierCollection, UIViewController, NSDictionary, NSString;

@interface MusicShareOperation : NSObject {

	MusicEntityValueProviderWrapper* _playlistWrapper;
	BOOL _container;
	MusicEntityValueContext* _entityValueContext;
	MPUContentItemIdentifierCollection* _identifierCollection;
	id<MusicEntityValueProviding> _entityValueProvider;
	UIViewController*<MusicJSNativeViewControllerFactory> _viewControllerWithJSNativeViewController;
	NSDictionary* _extraInfo;
	NSString* _jsButtonIdentifier;
	UIViewController* _presentationViewController;

}

@property (nonatomic,readonly) MusicEntityValueContext * entityValueContext;                                                              //@synthesize entityValueContext=_entityValueContext - In the implementation block
@property (nonatomic,readonly) MPUContentItemIdentifierCollection * identifierCollection;                                                 //@synthesize identifierCollection=_identifierCollection - In the implementation block
@property (nonatomic,readonly) id<MusicEntityValueProviding> entityValueProvider;                                                         //@synthesize entityValueProvider=_entityValueProvider - In the implementation block
@property (getter=isContainer,nonatomic,readonly) BOOL container;                                                                         //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) NSString * sharingTitle; 
@property (getter=isSharingDisabled,nonatomic,readonly) BOOL sharingDisabled; 
@property (nonatomic,retain) UIViewController*<MusicJSNativeViewControllerFactory> viewControllerWithJSNativeViewController;              //@synthesize viewControllerWithJSNativeViewController=_viewControllerWithJSNativeViewController - In the implementation block
@property (nonatomic,retain) NSDictionary * extraInfo;                                                                                    //@synthesize extraInfo=_extraInfo - In the implementation block
@property (nonatomic,copy) NSString * jsButtonIdentifier;                                                                                 //@synthesize jsButtonIdentifier=_jsButtonIdentifier - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentationViewController;                                                        //@synthesize presentationViewController=_presentationViewController - In the implementation block
+(id)_localizedShareStringForContentType:(unsigned long long)arg1 ;
+(BOOL)canShareWithEntityValueContext:(id)arg1 forContainer:(BOOL)arg2 ;
-(BOOL)isContainer;
-(NSDictionary *)extraInfo;
-(UIViewController *)presentationViewController;
-(id<MusicEntityValueProviding>)entityValueProvider;
-(void)setPresentationViewController:(UIViewController *)arg1 ;
-(void)_dispatchEventForPlaylist;
-(void)_dispatchEvent;
-(id)initWithMusicEntityValueContext:(id)arg1 forContainer:(BOOL)arg2 ;
-(void)dispatchEvent;
-(NSString *)sharingTitle;
-(BOOL)isSharingDisabled;
-(MusicEntityValueContext *)entityValueContext;
-(MPUContentItemIdentifierCollection *)identifierCollection;
-(UIViewController*<MusicJSNativeViewControllerFactory>)viewControllerWithJSNativeViewController;
-(void)setViewControllerWithJSNativeViewController:(UIViewController*<MusicJSNativeViewControllerFactory>)arg1 ;
-(void)setExtraInfo:(NSDictionary *)arg1 ;
-(NSString *)jsButtonIdentifier;
-(void)setJsButtonIdentifier:(NSString *)arg1 ;
@end

