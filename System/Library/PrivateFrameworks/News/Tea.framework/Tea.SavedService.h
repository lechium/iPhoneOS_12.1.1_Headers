/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/News/Tea.framework/Tea
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCReadingListObserving.h>

@interface Tea.SavedService : NSObject <FCReadingListObserving> {

	 observers;
	 readingList;
	 headlineStreamingResults;
	 articleController;
	 headlineModelFactory;
	 headlineService;

}
-(void)readingList:(id)arg1 didAddArticles:(id)arg2 removeArticles:(id)arg3 eventInitiationLevel:(long long)arg4 ;
-(id)init;
@end

