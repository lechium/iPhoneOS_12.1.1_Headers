/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/ML3DatabaseResult.h>

@class NSArray, NSDictionary, ML3DatabaseDistantConnection, NSString;

@interface ML3DatabaseDistantResult : ML3DatabaseResult {

	NSArray* _cachedRows;
	NSDictionary* _cachedColumnNameIndexMap;
	ML3DatabaseDistantConnection* _distantConnection;
	NSString* _sql;
	NSArray* _parameters;

}

@property (nonatomic,readonly) ML3DatabaseDistantConnection * distantConnection;              //@synthesize distantConnection=_distantConnection - In the implementation block
@property (nonatomic,readonly) NSString * sql;                                                //@synthesize sql=_sql - In the implementation block
@property (nonatomic,readonly) NSArray * parameters;                                          //@synthesize parameters=_parameters - In the implementation block
-(NSString *)sql;
-(unsigned long long)indexForColumnName:(id)arg1 ;
-(id)columnNameIndexMap;
-(id)initWithStatement:(id)arg1 ;
-(id)initWithDistantConnection:(id)arg1 sql:(id)arg2 parameters:(id)arg3 ;
-(void)_localEnumerateRowsWithBlock:(/*^block*/id)arg1 ;
-(void)_remoteEnumerateRowsWithBlock:(/*^block*/id)arg1 ;
-(BOOL)_fetchRowsIfEmpty;
-(ML3DatabaseDistantConnection *)distantConnection;
-(void)enumerateRowsWithBlock:(/*^block*/id)arg1 ;
-(id)init;
-(id)description;
-(NSArray *)parameters;
@end

