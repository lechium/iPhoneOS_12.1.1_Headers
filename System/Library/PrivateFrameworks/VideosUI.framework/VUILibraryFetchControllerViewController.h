/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/VUILocalContentProtocol.h>

@class VUIMediaLibrary, NSArray, UIView, NSString;

@interface VUILibraryFetchControllerViewController : UIViewController <VUILocalContentProtocol> {

	BOOL _onlyShowLocalContent;
	BOOL _pausesFetchControllersAutomatically;
	BOOL _contentHasBeenDeleted;
	BOOL _contentHasBeenManuallyDeleted;
	VUIMediaLibrary* _mediaLibrary;
	NSArray* _fetchControllers;
	UIView* _currentView;
	unsigned long long _currentViewType;
	NSString* _noContentErrorTitle;
	NSString* _noContentErrorMessage;
	NSString* _deletedContentErrorMessage;
	UIView* _contentView;
	UIView* _rootView;

}

@property (nonatomic,retain) VUIMediaLibrary * mediaLibrary;                        //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (nonatomic,copy) NSArray * fetchControllers;                              //@synthesize fetchControllers=_fetchControllers - In the implementation block
@property (nonatomic,retain) UIView * currentView;                                  //@synthesize currentView=_currentView - In the implementation block
@property (assign,nonatomic) BOOL contentHasBeenDeleted;                            //@synthesize contentHasBeenDeleted=_contentHasBeenDeleted - In the implementation block
@property (nonatomic,retain) UIView * rootView;                                     //@synthesize rootView=_rootView - In the implementation block
@property (assign,nonatomic) BOOL pausesFetchControllersAutomatically;              //@synthesize pausesFetchControllersAutomatically=_pausesFetchControllersAutomatically - In the implementation block
@property (assign,nonatomic) unsigned long long currentViewType;                    //@synthesize currentViewType=_currentViewType - In the implementation block
@property (nonatomic,copy) NSString * noContentErrorTitle;                          //@synthesize noContentErrorTitle=_noContentErrorTitle - In the implementation block
@property (nonatomic,copy) NSString * noContentErrorMessage;                        //@synthesize noContentErrorMessage=_noContentErrorMessage - In the implementation block
@property (assign,nonatomic) BOOL contentHasBeenManuallyDeleted;                    //@synthesize contentHasBeenManuallyDeleted=_contentHasBeenManuallyDeleted - In the implementation block
@property (nonatomic,copy) NSString * deletedContentErrorMessage;                   //@synthesize deletedContentErrorMessage=_deletedContentErrorMessage - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                  //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) BOOL onlyShowLocalContent;                             //@synthesize onlyShowLocalContent=_onlyShowLocalContent - In the implementation block
-(void)setMediaLibrary:(VUIMediaLibrary *)arg1 ;
-(VUIMediaLibrary *)mediaLibrary;
-(UIView *)currentView;
-(void)setCurrentView:(UIView *)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(UIView *)contentView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)setContentView:(UIView *)arg1 ;
-(UIView *)rootView;
-(void)setRootView:(UIView *)arg1 ;
-(BOOL)onlyShowLocalContent;
-(void)setOnlyShowLocalContent:(BOOL)arg1 ;
-(id)initWithMediaLibrary:(id)arg1 ;
-(NSArray *)fetchControllers;
-(void)setFetchControllers:(NSArray *)arg1 ;
-(void)setNoContentErrorTitle:(NSString *)arg1 ;
-(void)setCurrentViewType:(unsigned long long)arg1 ;
-(void)setDeletedContentErrorMessage:(NSString *)arg1 ;
-(void)startFetchControllers:(id)arg1 ;
-(NSString *)noContentErrorTitle;
-(NSString *)noContentErrorMessage;
-(id)_createAlertViewWithTitle:(id)arg1 description:(id)arg2 ;
-(void)setContentHasBeenDeleted:(BOOL)arg1 ;
-(void)setContentHasBeenManuallyDeleted:(BOOL)arg1 ;
-(BOOL)pausesFetchControllersAutomatically;
-(void)updateAfterContentWasManuallyDeleted:(BOOL)arg1 ;
-(void)setPausesFetchControllersAutomatically:(BOOL)arg1 ;
-(unsigned long long)currentViewType;
-(void)setNoContentErrorMessage:(NSString *)arg1 ;
-(BOOL)contentHasBeenDeleted;
-(BOOL)contentHasBeenManuallyDeleted;
-(NSString *)deletedContentErrorMessage;
@end

