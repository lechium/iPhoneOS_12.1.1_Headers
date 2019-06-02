/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iTunesCloud/iTunesCloud-Structs.h>
@class NSDictionary, ICSQLiteStatement;

@interface ICSQLiteRow : NSObject {

	NSDictionary* _columnIndexByName;
	sqlite3_stmtRef _statement;
	ICSQLiteStatement* _statementWrapper;

}

@property (nonatomic,readonly) long long numberOfColumns; 
-(long long)int64ForColumnIndex:(int)arg1 ;
-(id)stringForColumnIndex:(int)arg1 ;
-(id)numberForColumnIndex:(int)arg1 ;
-(int)intForColumnIndex:(int)arg1 ;
-(id)dataForColumnIndex:(int)arg1 ;
-(double)doubleForColumnIndex:(int)arg1 ;
-(id)stringForColumnName:(id)arg1 ;
-(id)initWithStatement:(id)arg1 ;
-(id)dataForColumnName:(id)arg1 ;
-(double)doubleForColumnName:(id)arg1 ;
-(int)intForColumnName:(id)arg1 ;
-(long long)int64ForColumnName:(id)arg1 ;
-(id)numberForColumnName:(id)arg1 ;
-(int)columnIndexForColumnName:(id)arg1 ;
-(long long)numberOfColumns;
@end

