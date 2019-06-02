/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface NSPersistentStoreRequest : NSObject <NSCopying> {

	NSArray* _affectedStores;

}

@property (nonatomic,retain) NSArray * affectedStores; 
@property (readonly) unsigned long long requestType; 
+(void)initialize;
-(BOOL)_secureOperation;
-(void)_setSecureOperation:(BOOL)arg1 ;
-(NSArray *)affectedStores;
-(void)setAffectedStores:(NSArray *)arg1 ;
-(unsigned long long)requestType;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
