/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSTLayoutDynamicContentProtocol.h>

@class TSTTableModel, NSString;

@interface TSTFilteredTableDynamicContentDelegate : NSObject <TSTLayoutDynamicContentProtocol> {

	TSTTableModel* mTableModel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)dynamicContentMustDrawOnMainThread;
-(BOOL)cell:(id*)arg1 forCellID:(SCD_Struct_TS139)arg2 ;
-(id)initWithTableModel:(id)arg1 ;
-(void)dealloc;
@end

