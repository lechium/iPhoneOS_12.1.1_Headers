/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSArray, NSSet;

@interface WBSContactAutoFillSet : NSObject {

	NSDictionary* _controlIDToValueMap;
	NSString* _label;
	NSArray* _fillDisplayProperties;
	NSArray* _skipDisplayProperties;
	NSSet* _propertiesToFillOrSkip;

}

@property (nonatomic,copy,readonly) NSDictionary * controlIDToValueMap;              //@synthesize controlIDToValueMap=_controlIDToValueMap - In the implementation block
@property (nonatomic,copy,readonly) NSString * label;                                //@synthesize label=_label - In the implementation block
@property (nonatomic,copy,readonly) NSArray * fillDisplayProperties;                 //@synthesize fillDisplayProperties=_fillDisplayProperties - In the implementation block
@property (nonatomic,copy,readonly) NSArray * skipDisplayProperties;                 //@synthesize skipDisplayProperties=_skipDisplayProperties - In the implementation block
@property (nonatomic,copy,readonly) NSSet * propertiesToFillOrSkip;                  //@synthesize propertiesToFillOrSkip=_propertiesToFillOrSkip - In the implementation block
+(id)displayStringsForSkipMatches:(id)arg1 matchesForForm:(id)arg2 formDataController:(id)arg3 ;
+(id)displayStringsForFillMatches:(id)arg1 skipMatches:(id)arg2 matchesForForm:(id)arg3 label:(id)arg4 formDataController:(id)arg5 ;
-(id)initWithControlIDToValueMap:(id)arg1 label:(id)arg2 fillDisplayProperties:(id)arg3 skipDisplayProperties:(id)arg4 propertiesToFillOrSkip:(id)arg5 ;
-(NSDictionary *)controlIDToValueMap;
-(NSArray *)fillDisplayProperties;
-(NSArray *)skipDisplayProperties;
-(NSSet *)propertiesToFillOrSkip;
-(NSString *)label;
@end

