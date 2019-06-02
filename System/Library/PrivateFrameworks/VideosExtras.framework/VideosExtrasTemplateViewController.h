/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosExtras/VideosExtrasElementViewController.h>
#import <libobjc.A.dylib/IKAppDocumentDelegate.h>

@class IKViewElement, NSDictionary, IKAppDocument, VideosExtrasContext, NSString;

@interface VideosExtrasTemplateViewController : VideosExtrasElementViewController <IKAppDocumentDelegate> {

	IKViewElement* _displayedTemplate;
	NSDictionary* _options;
	IKAppDocument* _document;
	VideosExtrasContext* _context;

}

@property (nonatomic,readonly) IKAppDocument * document;                          //@synthesize document=_document - In the implementation block
@property (nonatomic,readonly) BOOL showsPlaceholder; 
@property (nonatomic,__weak,readonly) VideosExtrasContext * context;              //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)templateViewControllerWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3 ;
-(BOOL)showsPlaceholder;
-(void)_showPlaceholder;
-(void)documentDidUpdate:(id)arg1 ;
-(void)documentNeedsUpdate:(id)arg1 ;
-(void)configureBackgroundWithElements:(id)arg1 ;
-(id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3 ;
-(BOOL)shouldUpdateByReplacingViewControllerWithTemplate:(id)arg1 ;
-(void)_startBackgroundAudio;
-(void)documentDidFail:(id)arg1 withError:(id)arg2 ;
-(void)dealloc;
-(VideosExtrasContext *)context;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(IKAppDocument *)document;
@end
