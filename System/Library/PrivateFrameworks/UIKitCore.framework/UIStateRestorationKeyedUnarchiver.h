/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSKeyedUnarchiver.h>

@class NSDictionary;

@interface UIStateRestorationKeyedUnarchiver : NSKeyedUnarchiver {

	NSDictionary* _defaultValues;

}
-(id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(id)decodeObjectForKey:(id)arg1 ;
-(id)initForReadingWithData:(id)arg1 defaultValues:(id)arg2 requiresSecureCoding:(BOOL)arg3 ;
-(id)decodeTopLevelObjectOfClasses:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
@end

