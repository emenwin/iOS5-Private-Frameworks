/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Symbolication/VMULoadCommand.h>

@interface VMUSymTabLoadCommand : VMULoadCommand
{
    unsigned int _symoff;
    unsigned int _nsyms;
    unsigned int _stroff;
    unsigned int _strsize;
}

- (id)initWithMemory:(id)arg1;
- (BOOL)isSymTab;
- (unsigned int)symoff;
- (unsigned int)nsyms;
- (unsigned int)stroff;
- (unsigned int)strsize;

@end

