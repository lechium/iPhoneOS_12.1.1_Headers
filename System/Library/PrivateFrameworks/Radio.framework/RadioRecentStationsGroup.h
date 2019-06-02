/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, NSArray;

@interface RadioRecentStationsGroup : NSObject <NSCopying, NSMutableCopying> {

	BOOL _active;
	NSString* _localizedTitle;
	NSArray* _stations;

}

@property (getter=isActive,nonatomic,readonly) BOOL active;                 //@synthesize active=_active - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedTitle;              //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy,readonly) NSArray * stations;                     //@synthesize stations=_stations - In the implementation block
-(NSArray *)stations;
-(id)_copyWithRecentStationsGroupClass:(Class)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isActive;
-(NSString *)localizedTitle;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
@end

