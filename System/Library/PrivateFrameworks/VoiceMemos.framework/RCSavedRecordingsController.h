/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSFetchedResultsController.h>

@protocol NSFetchedResultsControllerDelegate;
@class NSFetchRequest, NSPredicate, NSString, NSArray;

@interface RCSavedRecordingsController : NSFetchedResultsController {

	NSFetchRequest* _fetchRequest;
	NSPredicate* _fetchPredicate;
	NSString* _searchString;
	id<NSFetchedResultsControllerDelegate> _defaultDelegate;

}

@property (nonatomic,copy) NSString * searchString;                      //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,readonly) NSArray * fetchedRecordings; 
-(id)initWithFetchRequest:(id)arg1 managedObjectContext:(id)arg2 ;
-(void)setDefaultDelegate:(id)arg1 ;
-(NSArray *)fetchedRecordings;
-(void)setDelegate:(id)arg1 ;
-(void)invalidate;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
@end

