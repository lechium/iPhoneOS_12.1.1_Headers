/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface _ML3DatabaseNaturalStatement : NSObject {

	NSString* _sql;
	NSMutableArray* _parameters;

}

@property (nonatomic,retain) NSString * sql;                           //@synthesize sql=_sql - In the implementation block
@property (nonatomic,retain) NSMutableArray * parameters;              //@synthesize parameters=_parameters - In the implementation block
+(id)naturalStatementWithSQL:(id)arg1 parameters:(id)arg2 ;
-(NSString *)sql;
-(void)setParameter:(id)arg1 forPosition:(unsigned long long)arg2 ;
-(void)setSql:(NSString *)arg1 ;
-(id)init;
-(NSMutableArray *)parameters;
-(void)setParameters:(NSMutableArray *)arg1 ;
@end

