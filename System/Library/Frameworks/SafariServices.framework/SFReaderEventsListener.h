/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFReaderEventsListener <NSObject>
@required
-(void)didDetermineReaderAvailability:(BOOL)arg1 dueToSameDocumentNavigation:(BOOL)arg2;
-(void)contentDidBecomeReadyWithDetectedLanguage:(id)arg1;
-(void)didSetReaderConfiguration:(id)arg1;
-(void)didCollectReadingListItemInfo:(id)arg1 bookmarkID:(id)arg2;
-(void)didCollectReaderContentForMail:(id)arg1;
-(void)didPrepareReaderContentForPrinting:(id)arg1;
-(void)readerTextWasExtracted:(id)arg1 withMetadata:(id)arg2 wasDeterminingAvailabilility:(BOOL)arg3;

@end
