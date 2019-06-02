/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray, NSArray;

@interface GEOAvailableExperiment : NSObject {

	NSString* _identifier;
	NSString* _name;
	NSMutableArray* _branches;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * branches;                 //@synthesize branches=_branches - In the implementation block
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 ;
-(void)_addBranch:(id)arg1 ;
-(id)_branchForLabel:(id)arg1 ;
-(NSArray *)branches;
-(NSString *)identifier;
-(NSString *)name;
-(id)description;
@end

