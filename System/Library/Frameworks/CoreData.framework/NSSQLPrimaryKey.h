/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLColumn.h>

@class NSString;

@interface NSSQLPrimaryKey : NSSQLColumn {

	NSString* _name;

}
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(void)copyValuesForReadOnlyFetch:(id)arg1 ;
-(id)sqlTypeString;
-(void)dealloc;
-(id)name;
-(void)_setName:(id)arg1 ;
@end

