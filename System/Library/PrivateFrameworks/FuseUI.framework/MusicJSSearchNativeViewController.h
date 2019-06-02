/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicJSNativeViewController.h>
#import <libobjc.A.dylib/MusicJSSearchNativeViewController.h>

@protocol MusicJSSearchNativeViewController <JSExport,MusicJSNativeViewController>
@required
-(void)setSearchTerm:(id)arg1;
-(void)selectMediaPickerItem:(id)arg1;
-(void)setStoreSearchResultsDocument:(id)arg1 :(id)arg2;

@end


@protocol MusicJSSearchNativeViewControllerDelegate;
@class IKDOMDocument, IKAppDocument, NSDictionary, IKJSNavigationDocument;

@interface MusicJSSearchNativeViewController : MusicJSNativeViewController <MusicJSSearchNativeViewController> {

	IKDOMDocument* _storeSearchResultsJSDocument;
	id<MusicJSSearchNativeViewControllerDelegate> _delegate;
	IKAppDocument* _storeSearchResultsDocument;
	NSDictionary* _storeSearchResultsDocumentOptions;

}

@property (assign,nonatomic,__weak) id<MusicJSSearchNativeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IKAppDocument * storeSearchResultsDocument;                               //@synthesize storeSearchResultsDocument=_storeSearchResultsDocument - In the implementation block
@property (nonatomic,readonly) NSDictionary * storeSearchResultsDocumentOptions;                         //@synthesize storeSearchResultsDocumentOptions=_storeSearchResultsDocumentOptions - In the implementation block
@property (nonatomic,readonly) IKJSNavigationDocument * navigationDocument; 
-(void)setSearchTerm:(id)arg1 ;
-(void)navigationDocumentDidChange;
-(id)nativeViewIdentifier;
-(void)selectMediaPickerItem:(id)arg1 ;
-(void)setStoreSearchResultsDocument:(id)arg1 :(id)arg2 ;
-(IKAppDocument *)storeSearchResultsDocument;
-(NSDictionary *)storeSearchResultsDocumentOptions;
-(void)setDelegate:(id<MusicJSSearchNativeViewControllerDelegate>)arg1 ;
-(id<MusicJSSearchNativeViewControllerDelegate>)delegate;
@end
