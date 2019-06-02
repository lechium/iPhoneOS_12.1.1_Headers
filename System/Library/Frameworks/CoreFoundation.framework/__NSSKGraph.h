/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@interface __NSSKGraph : NSObject {

	edge* _edges;
	vertex* _vertices;
	unsigned long long _numV;
	unsigned long long _numE;
	unsigned long long _currE;
	unsigned long long _dump;
	unsigned long long _l_end;

}
-(id)initWithNumberOfVertices:(long long)arg1 numberOfEdges:(long long)arg2 ;
-(BOOL)addEdgeWithH1:(unsigned long long)arg1 withH2:(unsigned long long)arg2 ;
-(unsigned long long)numOfEdges;
-(edge*)isAcyclic;
-(void)dealloc;
-(BOOL)isEmpty;
@end

