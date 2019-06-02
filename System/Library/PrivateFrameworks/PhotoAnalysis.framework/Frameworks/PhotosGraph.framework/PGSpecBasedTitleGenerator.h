/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PGTitleSpecDelegate.h>

@protocol PGSpecBasedTitleGeneratorDelegate;
@class NSSet, PGTitleSpecCollection, PGTitle, NSString;

@interface PGSpecBasedTitleGenerator : NSObject <PGTitleSpecDelegate> {

	NSSet* _moments;
	NSSet* _features;
	PGTitleSpecCollection* _specCollection;
	PGTitle* _title;
	id<PGSpecBasedTitleGeneratorDelegate> _delegate;

}

@property (nonatomic,retain) NSSet * moments;                                     //@synthesize moments=_moments - In the implementation block
@property (nonatomic,retain) NSSet * features;                                    //@synthesize features=_features - In the implementation block
@property (nonatomic,retain) PGTitleSpecCollection * specCollection;              //@synthesize specCollection=_specCollection - In the implementation block
@property (readonly) PGTitle * title;                                             //@synthesize title=_title - In the implementation block
@property (__weak) id<PGSpecBasedTitleGeneratorDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSSet *)moments;
-(void)setMoments:(NSSet *)arg1 ;
-(NSSet *)features;
-(void)setFeatures:(NSSet *)arg1 ;
-(id)initWithMoments:(id)arg1 memoryCategory:(unsigned long long)arg2 subcategory:(unsigned long long)arg3 ;
-(id)initWithMoments:(id)arg1 features:(id)arg2 specCollection:(id)arg3 ;
-(id)_titleFromSpecs:(id)arg1 ;
-(id)titleSpec:(id)arg1 inputForArgument:(id)arg2 ;
-(id)initWithMoments:(id)arg1 meaningLabel:(id)arg2 ;
-(id)initWithMoments:(id)arg1 features:(id)arg2 meaningLabel:(id)arg3 isAggregation:(BOOL)arg4 ;
-(PGTitleSpecCollection *)specCollection;
-(void)setSpecCollection:(PGTitleSpecCollection *)arg1 ;
-(void)setDelegate:(id<PGSpecBasedTitleGeneratorDelegate>)arg1 ;
-(PGTitle *)title;
-(id)_title;
-(id<PGSpecBasedTitleGeneratorDelegate>)delegate;
@end

