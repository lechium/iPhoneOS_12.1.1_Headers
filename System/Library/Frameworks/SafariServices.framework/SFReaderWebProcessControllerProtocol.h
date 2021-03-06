/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFReaderWebProcessControllerProtocol <NSObject>
@required
-(void)setReaderFont:(id)arg1;
-(void)setReaderTheme:(id)arg1;
-(void)increaseReaderTextSize;
-(void)decreaseReaderTextSize;
-(void)prepareToTransitionToReader;
-(void)didCreateReaderPageContextHandle:(id)arg1;
-(void)loadNewReaderArticle;
-(void)setReaderInitialTopScrollOffset:(long long)arg1 configuration:(id)arg2 isViewingArchive:(BOOL)arg3;
-(void)setInitalArticleScrollPositionAsDictionary:(id)arg1;
-(void)collectReadingListItemInfoWithBookmarkID:(id)arg1;
-(void)collectReaderContentForMail;
-(void)prepareReaderContentForPrinting;
-(void)didFinishPresentationUpdateAfterTransitioningToReader;
-(void)willHideReader;

@end

