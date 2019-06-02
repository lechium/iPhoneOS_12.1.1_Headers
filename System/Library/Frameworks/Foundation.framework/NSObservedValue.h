/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface NSObservedValue : NSObject {

	id _contents;
	id _lastOriginator;
	int _tag;

}

@property (retain) id value; 
@property (retain) NSError * error; 
@property (assign) BOOL finished; 
-(BOOL)_isToManyChangeInformation;
-(id)copyToHeap;
-(BOOL)finished;
-(void)setFinished:(BOOL)arg1 ;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(id)value;
-(void)setValue:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end
