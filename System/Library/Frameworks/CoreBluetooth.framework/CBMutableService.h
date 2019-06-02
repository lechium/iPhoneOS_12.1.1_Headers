/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreBluetooth/CBService.h>

@class NSNumber, NSArray;

@interface CBMutableService : CBService {

	NSNumber* _ID;

}

@property (retain) NSNumber * ID;                           //@synthesize ID=_ID - In the implementation block
@property (retain) NSArray * includedServices; 
@property (retain) NSArray * characteristics; 
-(void)handlePowerNotOn;
-(id)initWithType:(id)arg1 primary:(BOOL)arg2 ;
-(NSNumber *)ID;
-(void)setID:(NSNumber *)arg1 ;
-(void)dealloc;
-(id)description;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithDictionary:(id)arg1 ;
@end

